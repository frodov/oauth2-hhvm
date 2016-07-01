<?hh // strict
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/thephpleague/oauth2-server
 */

namespace League\OAuth2\Server\Entities;

interface RefreshTokenEntityInterface
{
    /**
     * Get the token's identifier.
     *
     * @return string
     */
    public function getIdentifier() : string;

    /**
     * Set the token's identifier.
     *
     * @param $identifier
     */
    public function setIdentifier(string $identifier) : void;

    /**
     * Get the token's expiry date time.
     *
     * @return \DateTime
     */
    public function getExpiryDateTime() : \DateTime;

    /**
     * Set the date time when the token expires.
     *
     * @param \DateTime $dateTime
     */
    public function setExpiryDateTime(\DateTime $dateTime) : void;

    /**
     * Set the access token that the refresh token was associated with.
     *
     * @param \League\OAuth2\Server\Entities\AccessTokenEntityInterface $accessToken
     */
    public function setAccessToken(
        AccessTokenEntityInterface $accessToken
    ) : void;

    /**
     * Get the access token that the refresh token was originally associated with.
     *
     * @return \League\OAuth2\Server\Entities\AccessTokenEntityInterface
     */
    public function getAccessToken() : AccessTokenEntityInterface;
}
