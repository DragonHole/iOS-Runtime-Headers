/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCMContainerManager : NSObject
+(id)defaultManager;
-(id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 createIfNecessary:(BOOL)arg3 existed:(BOOL*)arg4 error:(id*)arg5 ;
-(id)temporaryContainerWithContentClass:(long long)arg1 identifier:(id)arg2 existed:(BOOL*)arg3 error:(id*)arg4 ;
-(id)containersWithClass:(long long)arg1 error:(id*)arg2 ;
-(id)temporaryContainersWithClass:(long long)arg1 error:(id*)arg2 ;
-(id)deleteContainers:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id*)arg3 ;
-(BOOL)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id*)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_containersWithClass:(long long)arg1 temporary:(BOOL)arg2 error:(id*)arg3 ;
-(id)init;
@end

