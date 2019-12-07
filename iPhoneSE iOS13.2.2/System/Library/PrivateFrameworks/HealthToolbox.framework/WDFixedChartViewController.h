/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class HKValueRange, HKInteractiveChartViewController, HKDataMetadataDetailSection, NSString;

@interface WDFixedChartViewController : HKTableViewController <WDUserActivityResponder> {

	HKValueRange* _fixedRange;
	HKInteractiveChartViewController* _chartController;
	HKDataMetadataDetailSection* _metadataSection;

}

@property (nonatomic,readonly) HKValueRange * fixedRange;                                       //@synthesize fixedRange=_fixedRange - In the implementation block
@property (nonatomic,readonly) HKInteractiveChartViewController * chartController;              //@synthesize chartController=_chartController - In the implementation block
@property (nonatomic,readonly) HKDataMetadataDetailSection * metadataSection;                   //@synthesize metadataSection=_metadataSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(id)cellForChart;
-(id)initWithInteractiveChartViewController:(id)arg1 sessionSample:(id)arg2 profile:(id)arg3 title:(id)arg4 ;
-(HKValueRange *)fixedRange;
-(HKInteractiveChartViewController *)chartController;
-(HKDataMetadataDetailSection *)metadataSection;
@end
