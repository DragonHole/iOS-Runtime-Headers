/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBSProcessHandle, BSMachPortTaskNameRight;


@protocol FBSProcessIdentity <FBSProcess>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,retain,readonly) FBSProcessHandle * handle; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight; 
@required
-(FBSProcessHandle *)handle;
-(NSString *)jobLabel;
-(BSMachPortTaskNameRight *)taskNameRight;
-(NSString *)name;
-(long long)type;

@end

