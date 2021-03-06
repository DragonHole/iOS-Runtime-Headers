/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject {

	NSArray* _batches;

}

@property (nonatomic,readonly) NSArray * batches;              //@synthesize batches=_batches - In the implementation block
-(NSArray *)batches;
-(id)initWithBatchCount:(unsigned long long)arg1 ;
-(id)batchedObservables;
-(void)addObservable:(id)arg1 toBatchAtIndex:(unsigned long long)arg2 ;
@end

