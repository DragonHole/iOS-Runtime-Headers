/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface ICURLBagRadioConfiguration : NSObject {

	NSDictionary* _bagRadioDictionary;

}

@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) long long getTracksDPInfoKBSyncCount; 
@property (nonatomic,readonly) long long maxSupportedProtocolVersion; 
-(NSURL *)baseURL;
-(id)urlForBagRadioKey:(id)arg1 ;
-(id)initWithBagRadioDictionary:(id)arg1 ;
-(long long)getTracksDPInfoKBSyncCount;
-(long long)maxSupportedProtocolVersion;
-(BOOL)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2 ;
@end

