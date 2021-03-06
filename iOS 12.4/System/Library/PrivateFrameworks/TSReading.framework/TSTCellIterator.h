/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSTTableModel, TSTCellRegion, TSTTableDataStore, TSTTableTileRowInfo, TSTTableTile, TSTCell;

@interface TSTCellIterator : NSObject {

	TSTTableModel* mTableModel;
	TSTCellRegion* mModelRegion;
	NSObject* mModelRegionIterator;
	TSTTableDataStore* mTableDataStore;
	SCD_Struct_TS139 mPreviousCellID;
	TSTTableTileRowInfo* mCurRow;
	TSTTableTile* mCurTile;
	unsigned short mCurRowID;
	NSRange mCurTileRange;
	TSTCell* mCell;
	BOOL mSkipStyleOnlyCells;
	BOOL mSkipCommentStorageOnlyCells;
	BOOL mDontExpandCellRefs;
	int mRowWalkDirection;
	BOOL mDontCheckSize;
	BOOL mDontReturnMergeRegions;
	BOOL mReturnHiddenCells;
	BOOL mDontInflateFormulas;
	BOOL mReturnEmptyCells;

}

@property (readonly) BOOL dontExpandCellRefs; 
@property (readonly) int rowWalkDirection; 
-(id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 ;
-(BOOL)getNext:(SCD_Struct_TS173*)arg1 ;
-(id)initWithTableModel:(id)arg1 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS141)arg2 ;
-(id)initWithTableModel:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS141)arg2 flags:(unsigned long long)arg3 ;
-(void)terminate;
-(void)p_resetIterData:(SCD_Struct_TS173*)arg1 ;
-(BOOL)p_getData:(SCD_Struct_TS173*)arg1 forCellID:(SCD_Struct_TS139)arg2 ;
-(id)initWithTableModel:(id)arg1 region:(id)arg2 ;
-(BOOL)dontExpandCellRefs;
-(int)rowWalkDirection;
-(void)dealloc;
@end

