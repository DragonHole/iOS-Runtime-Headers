/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString;

@interface HUCharacteristicStateCell : UITableViewCell {

	BOOL _enabled;

}

@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * valueText; 
@property (assign,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setValueText:(NSString *)arg1 ;
-(NSString *)valueText;
@end

