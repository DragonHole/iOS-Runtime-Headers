/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSData, NSValue, NSString;

@interface AAPhotoResponse : AAResponse {

	NSData* _photoData;
	NSValue* _cropRect;
	NSString* _serverCacheTag;

}

@property (nonatomic,readonly) NSData * photoData;                     //@synthesize photoData=_photoData - In the implementation block
@property (nonatomic,readonly) NSValue * cropRect;                     //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) NSString * serverCacheTag;              //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)serverCacheTag;
-(NSData *)photoData;
-(NSValue *)cropRect;
@end

