/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIContextMenuAccessoryView : UIView {

	int _trackingAxis;
	unsigned long long _location;
	NSRange _anchor;
	CGPoint _offset;

}

@property (assign,nonatomic) unsigned long long location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) NSRange anchor;                           //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) CGPoint offset;                           //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) int trackingAxis;                         //@synthesize trackingAxis=_trackingAxis - In the implementation block
-(unsigned long long)location;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setLocation:(unsigned long long)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(int)trackingAxis;
-(NSRange)anchor;
-(id)initWithFrame:(CGRect)arg1 configuration:(SCD_Struct_UI84)arg2 ;
-(void)setAnchor:(NSRange)arg1 ;
-(void)setTrackingAxis:(int)arg1 ;
@end

