/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTLResourceAllocationInfo;


@protocol MTLResourceSPI <MTLResource>
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
@required
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
-(BOOL)doesAliasResource:(id)arg1;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1;
-(MTLResourceAllocationInfo *)sharedAllocationInfo;
-(MTLResourceAllocationInfo *)cachedAllocationInfo;
-(BOOL)isPurgeable;
-(void)waitUntilComplete;
-(BOOL)isComplete;

@end

