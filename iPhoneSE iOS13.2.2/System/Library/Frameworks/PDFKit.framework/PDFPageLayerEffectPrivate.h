/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFPageLayerInterface;
#import <PDFKit/PDFKit-Structs.h>
@class NSUUID, PDFAnnotation, NSMutableDictionary, NSMutableArray, PDFScannerResult, CALayer, PDFPageLayerEffect;

@interface PDFPageLayerEffectPrivate : NSObject {

	id<PDFPageLayerInterface> pageLayer;
	NSUUID* uuid;
	CGRect pageFrame;
	BOOL shouldRotateContent;
	PDFAnnotation* annotation;
	NSMutableDictionary* markupEffectLayers;
	NSMutableArray* selections;
	NSMutableDictionary* selectionEffectLayers;
	PDFScannerResult* pdfResult;
	CALayer* rootSelectionLayer;
	PDFPageLayerEffect* noteLayer;

}
@end
