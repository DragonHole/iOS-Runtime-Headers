/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	SFUCryptoKey* _decryptionKey;
	BOOL _isMissingData;

}

@property (assign,nonatomic) BOOL isMissingData;              //@synthesize isMissingData=_isMissingData - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 decryptionKey:(id)arg2 ;
-(BOOL)isMissingData;
-(void)setIsMissingData:(BOOL)arg1 ;
@end

