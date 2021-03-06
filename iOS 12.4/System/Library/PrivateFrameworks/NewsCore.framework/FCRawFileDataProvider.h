/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAssetDataProvider.h>

@class NSString, FCInterestToken, NSData;

@interface FCRawFileDataProvider : NSObject <FCAssetDataProvider> {

	BOOL _isRawFileConsumable;
	NSString* _filePath;
	FCInterestToken* _holdToken;

}

@property (nonatomic,readonly) FCInterestToken * holdToken;              //@synthesize holdToken=_holdToken - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filePath;                      //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) BOOL isRawFileConsumable;                 //@synthesize isRawFileConsumable=_isRawFileConsumable - In the implementation block
-(FCInterestToken *)holdToken;
-(BOOL)isRawFileConsumable;
-(id)initWithFilePath:(id)arg1 holdToken:(id)arg2 ;
-(id)init;
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)filePath;
-(NSData *)data;
@end

