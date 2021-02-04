/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexText/SilexText-Structs.h>
#import <TSReading/TSDLayout.h>
#import <libobjc.A.dylib/TSWPLayoutTarget.h>

@class NSMutableArray, TSDCanvas, TSDLayout, NSString;

@interface STTextTangierFlowLayout : TSDLayout <TSWPLayoutTarget> {

	NSMutableArray* _columns;

}

@property (nonatomic,retain) NSMutableArray * columns;                                               //@synthesize columns=_columns - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> previousTargetLastColumn; 
@property (nonatomic,readonly) const void* previousTargetTopicNumbers; 
@property (nonatomic,retain,readonly) id<TSWPOffscreenColumn> nextTargetFirstColumn; 
@property (nonatomic,readonly) const void* nextTargetTopicNumbers; 
@property (nonatomic,readonly) id<TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer; 
@property (nonatomic,readonly) id<TSWPFootnoteMarkProvider> footnoteMarkProvider; 
@property (nonatomic,readonly) TSPObject*<TSDHint> nextTargetFirstChildHint; 
@property (nonatomic,readonly) CGSize minSize; 
@property (nonatomic,readonly) CGSize maxSize; 
@property (nonatomic,readonly) CGSize currentSize; 
@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (nonatomic,readonly) unsigned autosizeFlags; 
@property (nonatomic,readonly) unsigned verticalAlignment; 
@property (nonatomic,readonly) unsigned naturalAlignment; 
@property (nonatomic,readonly) int naturalDirection; 
@property (nonatomic,readonly) BOOL wantsLineFragments; 
@property (nonatomic,readonly) unsigned long long pageNumber; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) BOOL textIsVertical; 
@property (nonatomic,readonly) BOOL layoutIsValid; 
@property (nonatomic,readonly) double maxAnchorY; 
@property (nonatomic,readonly) CGRect maskRect; 
@property (nonatomic,retain) NSMutableArray * anchoredDrawablesForRelayout; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,readonly) TSDLayout * parentLayoutForInlineAttachments; 
@property (nonatomic,readonly) BOOL shouldHyphenate; 
@property (nonatomic,readonly) CFLocaleRef hyphenationLocale; 
@property (nonatomic,readonly) BOOL allowsLastLineTruncation; 
@property (nonatomic,readonly) double reservedWidthWhenTruncating; 
@property (nonatomic,readonly) unsigned maxLineCount; 
@property (nonatomic,readonly) BOOL ignoresEquationAlignment; 
@property (nonatomic,readonly) BOOL allowsDescendersToClip; 
@property (nonatomic,readonly) BOOL pushAscendersIntoColumn; 
@property (nonatomic,readonly) BOOL alwaysAllowWordSplit; 
-(NSMutableArray *)columns;
-(void)setColumns:(NSMutableArray *)arg1 ;
-(unsigned long long)characterPositionForPoint:(CGPoint)arg1 ;
-(CGPoint)pointForCharacterPosition:(unsigned long long)arg1 ;
-(CGPoint)capturedInfoPositionForAttachment;
-(id)layoutGeometryFromInfo;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldProvideSizingGuides;
-(BOOL)textIsVertical;
-(unsigned)autosizeFlags;
-(id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(BOOL)isLayoutOffscreen;
-(BOOL)shouldHyphenate;
-(BOOL)isLastTarget;
-(void)setNeedsDisplayInTargetRect:(CGRect)arg1 ;
-(CGRect)targetRectForCanvasRect:(CGRect)arg1 ;
-(BOOL)shouldPositionAttachmentsIteratively;
-(unsigned long long)iterativeAttachmentPositioningMaxPassCount;
-(id)layoutForInlineDrawable:(id)arg1 ;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1 ;
-(id)currentInlineDrawableLayouts;
-(id)currentAnchoredDrawableLayouts;
-(void)addAttachmentLayout:(id)arg1 ;
-(id<TSWPOffscreenColumn>)previousTargetLastColumn;
-(const void*)previousTargetTopicNumbers;
-(id<TSWPOffscreenColumn>)nextTargetFirstColumn;
-(const void*)nextTargetTopicNumbers;
-(id<TSWPFootnoteHeightMeasurer>)footnoteHeightMeasurer;
-(id<TSWPFootnoteMarkProvider>)footnoteMarkProvider;
-(TSPObject*<TSDHint>)nextTargetFirstChildHint;
-(CGSize)currentSize;
-(unsigned)naturalAlignment;
-(int)naturalDirection;
-(BOOL)wantsLineFragments;
-(BOOL)layoutIsValid;
-(double)maxAnchorY;
-(CGRect)maskRect;
-(TSDLayout *)parentLayoutForInlineAttachments;
-(BOOL)allowsLastLineTruncation;
-(unsigned)maxLineCount;
-(BOOL)ignoresEquationAlignment;
-(id)initWithInfo:(id)arg1 layout:(id)arg2 frame:(CGRect)arg3 ;
-(void)dealloc;
-(CGPoint)position;
-(TSDCanvas *)canvas;
-(unsigned long long)pageCount;
-(CGPoint)anchorPoint;
-(CGSize)maxSize;
-(unsigned)verticalAlignment;
-(void)validate;
-(CGSize)minSize;
-(unsigned long long)pageNumber;
@end
