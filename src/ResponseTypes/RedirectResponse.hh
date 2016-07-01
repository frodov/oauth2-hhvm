<?hh // decl

namespace League\OAuth2\Server\ResponseTypes;

use Psr\Http\Message\ResponseInterface;

class RedirectResponse extends AbstractResponseType
{
    /**
     * @var string
     */
    private string $redirectUri;

    /**
     * @param string $redirectUri
     */
    public function setRedirectUri($redirectUri) : void
    {
        $this->redirectUri = $redirectUri;
    }

    /**
     * @param ResponseInterface $response
     *
     * @return ResponseInterface
     */
    public function generateHttpResponse(ResponseInterface $response) : ResponseInterface
    {
        return $response->withStatus(302)->withHeader('Location', $this->redirectUri);
    }
}
