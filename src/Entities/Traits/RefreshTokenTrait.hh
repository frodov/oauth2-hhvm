<?hh // strict
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/thephpleague/oauth2-server
 */

namespace League\OAuth2\Server\Entities\Traits;

use DateTime;
use League\OAuth2\Server\Entities\AccessTokenEntityInterface;

trait RefreshTokenTrait
{
    /**
     * @var AccessTokenEntityInterface
     */
    protected AccessTokenEntityInterface $accessToken;

    /**
     * @var DateTime
     */
    protected \DateTime $expiryDateTime;

    /**
     * {@inheritdoc}
     */
    public function setAccessToken(AccessTokenEntityInterface $accessToken) : void
    {
        $this->accessToken = $accessToken;
    }

    /**
     * {@inheritdoc}
     */
    public function getAccessToken() : AccessTokenEntityInterface
    {
        return $this->accessToken;
    }

    /**
     * Get the token's expiry date time.
     *
     * @return DateTime
     */
    public function getExpiryDateTime() : \DateTime
    {
        return $this->expiryDateTime;
    }

    /**
     * Set the date time when the token expires.
     *
     * @param DateTime $dateTime
     */
    public function setExpiryDateTime(DateTime $dateTime) : void
    {
        $this->expiryDateTime = $dateTime;
    }
}
