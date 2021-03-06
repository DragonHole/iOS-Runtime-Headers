/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKController, AKHighlightAnnotation;

@interface AKHighlightAnnotationController : NSObject {

	AKController* _controller;
	AKHighlightAnnotation* _continuousHighlight;

}

@property (__weak) AKController * controller;                                //@synthesize controller=_controller - In the implementation block
@property (retain) AKHighlightAnnotation * continuousHighlight;              //@synthesize continuousHighlight=_continuousHighlight - In the implementation block
-(void)continueHighlighting;
-(void)beginContinuousHighlighting;
-(void)endContinuousHighlighting;
-(id)_createHighlightAnnotationWithAttributeTag:(long long)arg1 ;
-(BOOL)_adaptExistingHighlightsToNewHighlight:(id)arg1 onPageController:(id)arg2 firstModifiedHighlight:(id*)arg3 ;
-(BOOL)_clearHighlightsWithStyleMatchingMask:(unsigned long long)arg1 except:(id)arg2 inRange:(NSRange)arg3 onPageController:(id)arg4 ;
-(id)_highlightsInCharacterIndexRange:(NSRange)arg1 onPageController:(id)arg2 ;
-(void)setContinuousHighlight:(AKHighlightAnnotation *)arg1 ;
-(AKHighlightAnnotation *)continuousHighlight;
-(void)performOneShotHighlightWithAttributeTag:(long long)arg1 ;
-(void)clearHighlightsWithinSelection;
-(id)highlightsWithinSelection;
-(id)initWithController:(id)arg1 ;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
@end

