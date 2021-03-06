/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFCoachMarkManagerPrivate;

@interface PDFCoachMarkManager : NSObject {

	PDFCoachMarkManagerPrivate* _private;

}
-(void)_cleanCoachMarks;
-(id)_pageLayerForPage:(id)arg1 ;
-(id)initWithPDFRenderingProperties:(id)arg1 ;
-(void)createCoachMarkForPage:(id)arg1 atFrame:(CGRect)arg2 ;
-(void)pageLayerDidAppear:(id)arg1 ;
-(void)pageLayerWillRemove:(id)arg1 ;
@end

