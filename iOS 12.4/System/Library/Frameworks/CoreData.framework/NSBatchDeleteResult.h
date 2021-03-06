/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSBatchDeleteResult : NSPersistentStoreResult {

	id _aggregatedResult;
	unsigned long long _resultType;

}

@property (readonly) id result;                                  //@synthesize aggregatedResult=_aggregatedResult - In the implementation block
@property (readonly) unsigned long long resultType;              //@synthesize resultType=_resultType - In the implementation block
-(id)initWithResultType:(unsigned long long)arg1 andObject:(id)arg2 ;
-(id)initWithSubresults:(id)arg1 ;
-(unsigned long long)resultType;
-(void)dealloc;
-(id)result;
@end

