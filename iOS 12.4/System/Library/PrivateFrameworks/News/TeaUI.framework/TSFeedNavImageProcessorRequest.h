/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface TSFeedNavImageProcessorRequest : NSObject <TSProcessedImageRequestType> {

	 assetHandles;
	 feedNavImageSize;
	 scale;
	 cornerRadius;

}

@property (copy,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
-(void)setAssetHandles:(NSDictionary *)arg1 ;
-(id)initWithFeedNavImageAssetHandle:(id)arg1 feedNavImageSize:(CGSize)arg2 feedNavImageStyler:(id)arg3 scale:(double)arg4 ;
-(id)init;
@end

