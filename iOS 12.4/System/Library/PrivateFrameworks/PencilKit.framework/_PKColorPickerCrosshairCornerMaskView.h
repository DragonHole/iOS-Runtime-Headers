/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@interface _PKColorPickerCrosshairCornerMaskView : UIView {

	BOOL _excludeCorner;
	unsigned long long _cornerPosition;

}

@property (assign,nonatomic) unsigned long long cornerPosition;              //@synthesize cornerPosition=_cornerPosition - In the implementation block
@property (assign,nonatomic) BOOL excludeCorner;                             //@synthesize excludeCorner=_excludeCorner - In the implementation block
+(Class)layerClass;
-(void)_setPath:(id)arg1 ;
-(void)_setFillColor:(id)arg1 ;
-(unsigned long long)cornerPosition;
-(BOOL)excludeCorner;
-(void)setCornerPosition:(unsigned long long)arg1 ;
-(void)setExcludeCorner:(BOOL)arg1 ;
-(id)maskPath;
-(id)_shapeLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

