/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSTextLayoutOrientationProvider.h>

@protocol NSTextContainerView;
@class NSLayoutManager, UIView, NSArray, NSDictionary;

@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider> {

	NSLayoutManager* _layoutManager;
	UIView*<NSTextContainerView> _textView;
	CGSize _size;
	double _lineFragmentPadding;
	unsigned long long _maximumLines;
	struct {
		unsigned widthTracksTextView : 1;
		unsigned heightTracksTextView : 1;
		unsigned observingFrameChanges : 1;
		unsigned lineBreakMode : 4;
		unsigned oldAPI : 1;
		unsigned _reserved : 8;
	}  _tcFlags;
	NSArray* _exclusionPaths;
	CGPathRef _cachedBoundingPath;
	CFArrayRef _cachedClippingAttributes;
	CFArrayRef _cachedBounds;
	double _cacheBoundsMinY;
	double _cacheBoundsMaxY;
	double _minimumWidth;
	long long _layoutOrientation;
	NSDictionary* _attributesForExtraLineFragment;
	long long _applicationFrameworkContext;

}

@property (assign,nonatomic) NSLayoutManager * layoutManager; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSArray * exclusionPaths; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) double lineFragmentPadding; 
@property (assign,nonatomic) unsigned long long maximumNumberOfLines; 
@property (getter=isSimpleRectangularTextContainer,nonatomic,readonly) BOOL simpleRectangularTextContainer; 
@property (assign,nonatomic) BOOL widthTracksTextView; 
@property (assign,nonatomic) BOOL heightTracksTextView; 
@property (nonatomic,readonly) long long layoutOrientation; 
+(void)initialize;
-(NSEdgeInsets)textContainerInsetsForView:(id)arg1 ;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 remainingRect:(CGRect*)arg2 ;
-(BOOL)isSimpleRectangularTextContainer;
-(NSEdgeInsets)textContainerInsetsForView_iOS:(id)arg1 ;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(CGRect*)arg4 ;
-(void)_resizeAccordingToTextView:(id)arg1 ;
-(double)minimumLineFragmentWidth;
-(void)replaceLayoutManager:(id)arg1 ;
-(void)setMinimumLineFragmentWidth:(double)arg1 ;
-(BOOL)_containerObservesTextViewFrameChanges;
-(void)_containerTextViewFrameChanged:(id)arg1 ;
-(id)initWithContainerSize:(CGSize)arg1 ;
-(CGSize)containerSize;
-(CGSize)size;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSLayoutManager *)layoutManager;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)_commonInit;
-(id)initWithSize:(CGSize)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setLayoutManager:(NSLayoutManager *)arg1 ;
-(void)setLineFragmentPadding:(double)arg1 ;
-(long long)lineBreakMode;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(void)setTextView:(id)arg1 ;
-(BOOL)widthTracksTextView;
-(BOOL)heightTracksTextView;
-(void)setWidthTracksTextView:(BOOL)arg1 ;
-(void)setHeightTracksTextView:(BOOL)arg1 ;
-(void)coordinateAccess:(/*^block*/id)arg1 ;
-(id)textView;
-(CGPoint)textContainerOrigin;
-(void)setAttributesForExtraLineFragment:(id)arg1 ;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(NSArray *)exclusionPaths;
-(void)setExclusionPaths:(NSArray *)arg1 ;
-(double)lineFragmentPadding;
-(unsigned long long)maximumNumberOfLines;
-(id)attributesForExtraLineFragment;
-(void)setContainerSize:(CGSize)arg1 ;
@end
