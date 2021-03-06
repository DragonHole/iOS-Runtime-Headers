/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFSetDiff.h>

@interface HFMutableSetDiff : HFSetDiff {

	BOOL _hasChanges;

}

@property (nonatomic,readonly) BOOL hasChanges;              //@synthesize hasChanges=_hasChanges - In the implementation block
-(BOOL)hasChanges;
-(void)updateObject:(id)arg1 ;
-(void)deleteAllObjects;
-(void)_updateHasChanges;
-(id)initWithFromSet:(id)arg1 ;
-(void)deleteObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

