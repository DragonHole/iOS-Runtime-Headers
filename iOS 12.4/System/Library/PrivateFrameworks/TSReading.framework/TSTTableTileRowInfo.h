/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPContainedObject.h>

@interface TSTTableTileRowInfo : TSPContainedObject {

	CFDataRef mStorageBuffer;
	unsigned short mStorageOffsets[255];
	unsigned short mBufferSize;
	unsigned short mTileRowIndex;
	unsigned short mCellCount;
	unsigned char mMaxTileColumnIndex;
	BOOL mMaxTileColumnIndexValid;
	unsigned char mStorageVersion;

}

@property (assign,nonatomic) unsigned short tileRowIndex; 
@property (nonatomic,readonly) unsigned short cellCount; 
-(unsigned short)cellCount;
-(void)debugDump;
-(void)i_upgradeWithDataStore:(id)arg1 ;
-(id)initWithOwner:(id)arg1 tileRowIndex:(unsigned short)arg2 ;
-(id)p_debugDumpCompact;
-(unsigned short)tileRowIndex;
-(void)setTileRowIndex:(unsigned short)arg1 ;
-(void)dealloc;
-(id)description;
-(void)validate;
@end
