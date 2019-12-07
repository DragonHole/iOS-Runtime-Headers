/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSSearchConnection.h>

@class NSString;

@interface CSPrivateSearchConnection : CSSearchConnection {

	NSString* _token;

}

@property (nonatomic,retain) NSString * token;              //@synthesize token=_token - In the implementation block
+(id)privateSearchConnectionWithToken:(id)arg1 ;
-(NSString *)token;
-(id)initWithToken:(id)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(BOOL)arg4 ;
@end
