/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSUIntegerKeyDictionary;

@interface TSTCellDictionary : NSObject {

	TSUIntegerKeyDictionary* mDict;
	opaque_pthread_rwlock_t mDictRWLock;

}
-(id)init;
-(void)dealloc;
-(id)allCells;
-(void)setCell:(id)arg1 atCellID:(SCD_Struct_TS126)arg2 ;
-(id)cellAtCellID:(SCD_Struct_TS126)arg1 ;
-(void)removeAllCells;
-(void)applyBlockToAllCells:(/*^block*/id)arg1 ;
@end
