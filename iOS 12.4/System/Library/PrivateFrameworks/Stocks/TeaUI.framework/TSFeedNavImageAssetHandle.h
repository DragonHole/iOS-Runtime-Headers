/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Stocks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <libobjc.A.dylib/TSAssetHandleType.h>

@class UIImage, NSString;

@interface TSFeedNavImageAssetHandle : NSObject <TSAssetHandleType> {

	 dataProvider;
	 fallbackImage;
	 uniqueKey;
	 feedNavImageSize;
	 tag;
	 feedNavImageStyler;

}

@property (retain,nonatomic) id<FCAssetDataProvider> dataProvider; 
@property (retain,nonatomic) UIImage * fallbackImage; 
@property (readonly,nonatomic) NSString * uniqueKey; 
-(UIImage *)fallbackImage;
-(NSString *)uniqueKey;
-(void)downloadWithGroup:(id)arg1 ;
-(void)setFallbackImage:(UIImage *)arg1 ;
-(id)initWithIdentifier:(id)arg1 feedNavImage:(id)arg2 feedNavImageSize:(CGSize)arg3 feedNavImageStyler:(id)arg4 ;
-(id)initWithTag:(id)arg1 feedNavImageSize:(CGSize)arg2 feedNavImageStyler:(id)arg3 ;
-(id)init;
-(void)setDataProvider:(id<FCAssetDataProvider>)arg1 ;
-(id<FCAssetDataProvider>)dataProvider;
@end
