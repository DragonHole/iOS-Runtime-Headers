/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSMergePolicy.h>

@interface ICNoteMergePolicy : NSMergePolicy
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
-(BOOL)resolveConstraintConflicts:(id)arg1 error:(id*)arg2 ;
-(id)initWithMergeType:(unsigned long long)arg1 ;
-(void)mergeEncryptedData:(id)arg1 forNote:(id)arg2 mergeConflict:(id)arg3 ;
-(id)init;
@end

