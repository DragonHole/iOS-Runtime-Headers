/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDMutableContainerInfo <TSDContainerInfo>
@required
-(void)setChildInfos:(id)arg1;
-(void)addChildInfo:(id)arg1;
-(void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)insertChildInfo:(id)arg1 below:(id)arg2;
-(void)insertChildInfo:(id)arg1 above:(id)arg2;
-(void)moveChildren:(id)arg1 toIndexes:(id)arg2;
-(void)removeChildInfo:(id)arg1;
-(void)replaceChildInfo:(id)arg1 with:(id)arg2;

@end
