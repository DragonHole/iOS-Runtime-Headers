/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SBGreenController : NSObject {

	NSArray* _relevantGreenKeys;
	unsigned long long _fileExistenceState;

}
-(id)init;
-(void)performPreBuddyWork;
-(void)_readFileStateFromDisk;
-(id)_defaultValuesDictionaryAndState:(unsigned long long*)arg1 ;
-(BOOL)_writeGreenValuesToDisk:(id)arg1 withState:(unsigned long long)arg2 ;
-(unsigned long long)_effectivePlaceIsAmbiguous:(BOOL*)arg1 ;
-(id)_deviceRegionCode;
@end

