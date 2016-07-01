<?hh // decl
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/thephpleague/oauth2-server
 */

namespace League\OAuth2\Server\RequestTypes;

use League\OAuth2\Server\Entities\ClientEntityInterface;
use League\OAuth2\Server\Entities\ScopeEntityInterface;
use League\OAuth2\Server\Entities\UserEntityInterface;

class AuthorizationRequest
{
    /**
     * The grant type identifier
     *
     * @var string
     */
    protected string $grantTypeId;

    /**
     * The client identifier
     *
     * @var ClientEntityInterface
     */
    protected ClientEntityInterface $client;

    /**
     * The user identifier
     *
     * @var UserEntityInterface
     */
    protected UserEntityInterface $user;

    /**
     * An array of scope identifiers
     *
     * @var ScopeEntityInterface[]
     */
    protected array<ScopeEntityInterface> $scopes = [];

    /**
     * Has the user authorized the authorization request
     *
     * @var bool
     */
    protected bool $authorizationApproved = false;

    /**
     * The redirect URI used in the request
     *
     * @var string
     */
    protected string $redirectUri;

    /**
     * The state parameter on the authorization request
     *
     * @var string
     */
    protected string $state;

    /**
     * The code challenge (if provided)
     * @var string
     */
    protected string $codeChallenge;

    /**
     * The code challenge method (if provided)
     * @var string
     */
    protected string $codeChallengeMethod;

    /**
     * @return string
     */
    public function getGrantTypeId() : string
    {
        return $this->grantTypeId;
    }

    /**
     * @param string $grantTypeId
     */
    public function setGrantTypeId(string $grantTypeId) : void
    {
        $this->grantTypeId = $grantTypeId;
    }

    /**
     * @return ClientEntityInterface
     */
    public function getClient() : ClientEntityInterface
    {
        return $this->client;
    }

    /**
     * @param ClientEntityInterface $client
     */
    public function setClient(ClientEntityInterface $client) : void
    {
        $this->client = $client;
    }

    /**
     * @return UserEntityInterface
     */
    public function getUser() : UserEntityInterface
    {
        return $this->user;
    }

    /**
     * @param UserEntityInterface $user
     */
    public function setUser(UserEntityInterface $user) : void
    {
        $this->user = $user;
    }

    /**
     * @return \League\OAuth2\Server\Entities\ScopeEntityInterface[]
     */
    public function getScopes() : array<ScopeEntityInterface>
    {
        return $this->scopes;
    }

    /**
     * @param \League\OAuth2\Server\Entities\ScopeEntityInterface[] $scopes
     */
    public function setScopes(array<ScopeEntityInterface> $scopes) : void
    {
        $this->scopes = $scopes;
    }

    /**
     * @return bool
     */
    public function isAuthorizationApproved() : bool
    {
        return $this->authorizationApproved;
    }

    /**
     * @param bool $authorizationApproved
     */
    public function setAuthorizationApproved(bool $authorizationApproved) : void
    {
        $this->authorizationApproved = $authorizationApproved;
    }

    /**
     * @return string
     */
    public function getRedirectUri() : string
    {
        return $this->redirectUri;
    }

    /**
     * @param string $redirectUri
     */
    public function setRedirectUri(string $redirectUri) : void
    {
        $this->redirectUri = $redirectUri;
    }

    /**
     * @return string
     */
    public function getState() : string
    {
        return $this->state;
    }

    /**
     * @param string $state
     */
    public function setState(string $state) : void
    {
        $this->state = $state;
    }

    /**
     * @return string
     */
    public function getCodeChallenge() : string
    {
        return $this->codeChallenge;
    }

    /**
     * @param string $codeChallenge
     */
    public function setCodeChallenge(string $codeChallenge) : void
    {
        $this->codeChallenge = $codeChallenge;
    }

    /**
     * @return string
     */
    public function getCodeChallengeMethod() : string
    {
        return $this->codeChallengeMethod;
    }

    /**
     * @param string $codeChallengeMethod
     */
    public function setCodeChallengeMethod(string $codeChallengeMethod) : void
    {
        $this->codeChallengeMethod = $codeChallengeMethod;
    }
}
