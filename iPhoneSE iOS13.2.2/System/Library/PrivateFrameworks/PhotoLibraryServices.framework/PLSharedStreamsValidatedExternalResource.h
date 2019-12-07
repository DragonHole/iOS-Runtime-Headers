/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSString;

@interface PLSharedStreamsValidatedExternalResource : PLValidatedExternalResource {

	unsigned _sharedStreamsType;
	NSString* _fingerprint;

}

@property (assign,nonatomic) unsigned sharedStreamsType;              //@synthesize sharedStreamsType=_sharedStreamsType - In the implementation block
@property (nonatomic,retain) NSString * fingerprint;                  //@synthesize fingerprint=_fingerprint - In the implementation block
-(id)description;
-(void)setFingerprint:(NSString *)arg1 ;
-(void)setSharedStreamsType:(unsigned)arg1 ;
-(unsigned)sharedStreamsType;
-(NSString *)fingerprint;
@end
