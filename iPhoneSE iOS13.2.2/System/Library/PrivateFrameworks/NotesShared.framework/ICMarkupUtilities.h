/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@interface ICMarkupUtilities : NSObject
+(BOOL)hasPrivateImageMetadata:(id)arg1 ;
+(id)cleanImageMetadataFromData:(id)arg1 ;
+(id)createMarkupViewController;
+(id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 embedData:(BOOL)arg3 ;
+(id)createProcessingMarkupViewControllerOutWindow:(UIWindow*)arg1 ;
+(void)embedReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)extractReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)markupModelDataFromDataAtURL:(id)arg1 ;
+(void)applyMarkupModelData:(id)arg1 attachment:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 ;
+(id)imageDataWithMarkupModelData:(id)arg1 sourceImageURL:(id)arg2 ;
+(void)applyReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)markupModelDataFromData:(id)arg1 ;
@end
