/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SLWebAuthIdentity : NSObject {

	NSString* _username;
	NSString* _token;
	NSString* _displayName;
	NSString* _refreshToken;
	NSString* _youTubeUsername;

}

@property (nonatomic,readonly) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * token;                        //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * refreshToken;                 //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,readonly) NSString * youTubeUsername;              //@synthesize youTubeUsername=_youTubeUsername - In the implementation block
-(id)initWithUsername:(id)arg1 token:(id)arg2 displayName:(id)arg3 refreshToken:(id)arg4 youTubeUsername:(id)arg5 ;
-(NSString *)youTubeUsername;
-(NSString *)refreshToken;
-(NSString *)displayName;
-(NSString *)username;
-(NSString *)token;
@end

