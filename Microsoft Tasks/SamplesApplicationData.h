#import <Foundation/Foundation.h>
#import <ADALiOS/ADAuthenticationResult.h>

@interface SamplesApplicationData : NSObject

@property (strong) ADTokenCacheStoreItem *userItem;
@property (strong) NSString* taskWebApiUrlString;
@property (strong) NSString* authority;
@property (strong) NSString* clientId;
@property (strong) NSString* resourceId;
@property (strong) NSString* redirectUriString;

+(id) getInstance;

@end
