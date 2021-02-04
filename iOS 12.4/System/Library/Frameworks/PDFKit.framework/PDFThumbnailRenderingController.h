/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSOperationQueue, UIImage, NSMutableDictionary, NSObject;

@interface PDFThumbnailRenderingController : NSObject {

	NSMapTable* _contextObjectToContextMap;
	NSMapTable* _contextObjectToOperationMap;
	NSOperationQueue* _sharedOperationQueue;
	UIImage* _genericThumbnailImage;
	NSMutableDictionary* _cachedThumbnails;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedController;
-(id)_initInternal;
-(void)_scheduleOperationForContext:(id)arg1 ;
-(BOOL)_isOperationScheduledForContext:(id)arg1 ;
-(void)_cancelOperationForContext:(id)arg1 ;
-(id)thumbnailOfSize:(unsigned long long)arg1 forPage:(id)arg2 ;
-(id)cachedThumbnailForPage:(id)arg1 ;
-(void)registerThumbnailBlock:(/*^block*/id)arg1 withPreferredSize:(unsigned long long)arg2 forPage:(id)arg3 context:(id)arg4 withPlaceholder:(BOOL)arg5 orClearFirst:(BOOL)arg6 ;
-(void)updatePreferredSize:(unsigned long long)arg1 forContext:(id)arg2 ;
-(void)unregisterThumbnailBlockForContext:(id)arg1 ;
-(id)init;
-(void)clearCache;
@end
