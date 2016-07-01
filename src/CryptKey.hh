<?hh // strict
/**
 * Cryptography key holder.
 *
 * @author      Julián Gutiérrez <juliangut@gmail.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/thephpleague/oauth2-server
 */
namespace League\OAuth2\Server;

class CryptKey
{
    /**
     * @var string
     */
    protected string $keyPath;

    /**
     * @var string
     */
    protected ?string $passPhrase;

    /**
     * @param string      $keyPath
     * @param null|string $passPhrase
     */
    public function __construct(string $keyPath, ?string $passPhrase = null)
    {
        if (strpos($keyPath, 'file://') !== 0) {
            $keyPath = 'file://' . $keyPath;
        }

        if (!file_exists($keyPath) || !is_readable($keyPath)) {
            throw new \LogicException(sprintf(
                'Key path "%s" does not exist or is not readable',
                $keyPath)
            );
        }

        $this->keyPath = $keyPath;
        $this->passPhrase = $passPhrase;
    }

    /**
     * Retrieve key path.
     *
     * @return string
     */
    public function getKeyPath() : string
    {
        return $this->keyPath;
    }

    /**
     * Retrieve key pass phrase.
     *
     * @return null|string
     */
    public function getPassPhrase() : ?string
    {
        return $this->passPhrase;
    }
}
