/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SearchUI/SearchUI-Structs.h>
@class NSArray;

@interface SearchUITableModel : NSObject {

	NSArray* _tableRowModel;
	NSArray* _sections;

}

@property (retain) NSArray * tableRowModel;              //@synthesize tableRowModel=_tableRowModel - In the implementation block
@property (retain) NSArray * sections;                   //@synthesize sections=_sections - In the implementation block
+(id)tableModelWithCardSections:(id)arg1 ;
+(id)tableModelWithResult:(id)arg1 ;
+(id)tableModelWithSections:(id)arg1 expandedSections:(id)arg2 ;
+(id)resultsForMultiResultRowInSection:(id)arg1 startingAtIndex:(unsigned long long)arg2 ;
+(id)rowModelsForResult:(id)arg1 ;
+(id)rowModelsForCardSections:(id)arg1 result:(id)arg2 ;
+(id)gridLayoutsForCardSections:(id)arg1 ;
+(id)asyncRowManagersForCardSections:(id)arg1 ;
-(long long)numberOfRowsForSection:(long long)arg1 ;
-(id)rowModelForIndexPath:(id)arg1 ;
-(BOOL)shouldDisplayChevronForIndexPath:(id)arg1 ;
-(BOOL)shouldLeaveSpaceForChevronForIndexPath:(id)arg1 ;
-(id)resultForIndexPath:(id)arg1 ;
-(id)cardSectionForIndexPath:(id)arg1 ;
-(id)sectionForIndexPath:(id)arg1 ;
-(NSRange)rowRangeForSelectingForIndexPath:(id)arg1 ;
-(void)replaceResult:(id)arg1 withResult:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)indexPathForResult:(id)arg1 ;
-(void)setTableRowModel:(NSArray *)arg1 ;
-(NSArray *)tableRowModel;
-(BOOL)indexPathExists:(id)arg1 ;
-(id)description;
-(unsigned long long)numberOfSections;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
@end

