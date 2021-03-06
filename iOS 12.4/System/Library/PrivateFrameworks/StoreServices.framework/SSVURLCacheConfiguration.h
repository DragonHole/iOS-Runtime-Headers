/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SSVURLCacheConfiguration : NSObject {

	BOOL _supportsProcessSharing;
	NSString* _sessionIdentifier;

}

@property (nonatomic,copy) NSString * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsProcessSharing;              //@synthesize supportsProcessSharing=_supportsProcessSharing - In the implementation block
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(BOOL)supportsProcessSharing;
-(void)setSupportsProcessSharing:(BOOL)arg1 ;
-(NSString *)sessionIdentifier;
@end

