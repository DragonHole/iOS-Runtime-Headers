/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface REExportedTable : NSObject {

	NSMutableArray* _data;
	BOOL _sortable;
	NSArray* _header;

}

@property (nonatomic,retain) NSArray * header;                            //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) unsigned long long rowsCount; 
@property (assign,nonatomic) BOOL sortable;                               //@synthesize sortable=_sortable - In the implementation block
-(id)init;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(NSArray *)header;
-(void)setHeader:(NSArray *)arg1 ;
-(void)addRow:(id)arg1 ;
-(BOOL)sortable;
-(unsigned long long)rowsCount;
-(void)setSortable:(BOOL)arg1 ;
@end

