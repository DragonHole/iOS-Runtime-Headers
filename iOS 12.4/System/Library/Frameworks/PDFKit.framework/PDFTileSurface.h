/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class NSDate;

@interface PDFTileSurface : NSObject {

	int tileId;
	int pageNumber;
	int tileSize;
	int type;
	IOSurfaceRef ioSurfaceRef;
	CGImageRef cgImageRef;
	NSDate* recycledDate;

}
@end

