<?hh // strict
/**
 * @author      Alex Bilbie <hello@alexbilbie.com>
 * @copyright   Copyright (c) Alex Bilbie
 * @license     http://mit-license.org/
 *
 * @link        https://github.com/thephpleague/oauth2-server
 */

namespace League\OAuth2\Server\Entities;

interface TokenInterface
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
     * Set the identifier of the user associated with the token.
     *
     * @param string|int $identifier The identifier of the user
     */
    public function setUserIdentifier(string $identifier) : void;

    /**
     * Get the token user's identifier.
     *
     * @return string|int
     */
    public function getUserIdentifier() : string;

    /**
     * Get the client that the token was issued to.
     *
     * @return ClientEntityInterface
     */
    public function getClient() : ClientEntityInterface;

    /**
     * Set the client that the token was issued to.
     *
     * @param \League\OAuth2\Server\Entities\ClientEntityInterface $client
     */
    public function setClient(ClientEntityInterface $client) : void;

    /**
     * Associate a scope with the token.
     *
     * @param \League\OAuth2\Server\Entities\ScopeEntityInterface $scope
     */
    public function addScope(ScopeEntityInterface $scope) : void;

    /**
     * Return an array of scopes associated with the token.
     *
     * @return ScopeEntityInterface[]
     */
    public function getScopes() : array<ScopeEntityInterface>;
}
