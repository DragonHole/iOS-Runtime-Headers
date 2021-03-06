/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKViewTableViewCell.h>
#import <libobjc.A.dylib/WDDisplayTypeDetailViewControllerChartCellType.h>

@class NSString;

@interface WDInteractiveChartTableViewCell : HKViewTableViewCell <WDDisplayTypeDetailViewControllerChartCellType> {

	unsigned long long _displayMode;
	unsigned long long _marginMode;

}

@property (assign,nonatomic) unsigned long long displayMode;              //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) unsigned long long marginMode;               //@synthesize marginMode=_marginMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultReuseIdentifier;
-(unsigned long long)displayMode;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(void)setTimeScope:(long long)arg1 ;
-(void)setMarginMode:(unsigned long long)arg1 ;
-(unsigned long long)marginMode;
-(void)setPrimaryValueSource:(id)arg1 secondaryValueSource:(id)arg2 chartSource:(id)arg3 ;
@end

