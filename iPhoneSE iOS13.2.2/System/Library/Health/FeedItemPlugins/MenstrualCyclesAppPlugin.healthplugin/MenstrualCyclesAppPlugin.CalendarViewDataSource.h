/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDataSource.h>

@interface MenstrualCyclesAppPlugin.CalendarViewDataSource : NSObject <UICollectionViewDataSource> {

	 cellProvider;
	??? calendar;
	 includeSpacerCellsFromFirstWeekday;
	??? startDate;
	??? startComponents;
	??? endDate;
	??? endComponents;

}
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)init;
@end

