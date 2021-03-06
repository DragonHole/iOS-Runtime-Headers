/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PDFKit/PDFKit-Structs.h>
@class NSObject, NSMutableDictionary, PDFTimer;

@interface PDFTilePoolPrivate : NSObject {

	NSObject*<OS_dispatch_queue> workQueue;
	os_unfair_lock_s surfacesLock;
	NSMutableDictionary* usedSurfaces;
	NSMutableDictionary* freeSurfaces;
	PDFTimer* recycleTimer;
	int tileRenderType;
	BOOL debugColorTileEdge;

}
@end

