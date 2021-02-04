/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UILayoutEngineSuspending.h>

@class CALayer, NSString;

@interface UITableViewCellContentView : UIView <_UILayoutEngineSuspending> {

	BOOL _isLayoutEngineSuspended;
	CALayer* _mask;

}

@property (nonatomic,retain) CALayer * mask;                                                                                             //@synthesize mask=_mask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) BOOL _layoutEngineSuspended;              //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
+(id)classFallbacksForKeyedArchiver;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(CALayer *)mask;
-(void)setMask:(CALayer *)arg1 ;
-(id)_cell;
-(void)_setLayoutEngineSuspended:(BOOL)arg1 ;
-(BOOL)_isLayoutEngineSuspended;
-(void)_tableViewCellContentViewCommonSetup;
@end
