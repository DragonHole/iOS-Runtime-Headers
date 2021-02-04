/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXTangierDragItemProvider.h>

@protocol SXTangierDragItemProvider <NSObject>
@required
-(id)dragItemForSmartField:(id)arg1 interaction:(id)arg2 session:(id)arg3;

@end


@class NSString;

@interface SXTangierDragItemProvider : NSObject <SXTangierDragItemProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)session:(id)arg1 containsURL:(id)arg2 ;
-(id)dragItemForSmartField:(id)arg1 interaction:(id)arg2 session:(id)arg3 ;
@end
