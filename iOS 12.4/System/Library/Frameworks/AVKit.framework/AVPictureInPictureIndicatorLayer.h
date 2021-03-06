/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString, CATextLayer, CALayer;

@interface AVPictureInPictureIndicatorLayer : CALayer {

	NSAttributedString* _attributedText;
	CGSize _imageSize;
	UIEdgeInsets _languageAwareOutsets;
	double _lineHeight;
	double _baselineOffset;
	CATextLayer* _textLayer;
	CALayer* _imageLayer;

}
-(id)initWithTraitCollection:(id)arg1 opaque:(BOOL)arg2 ;
-(CGRect)textBoundingRectWhenDrawnInRect:(CGRect)arg1 ;
-(id)init;
-(void)layoutSublayers;
@end

