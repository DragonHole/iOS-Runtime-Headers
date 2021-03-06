/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIIDSHandleAvailability.h>

@protocol CNUIIDSHandle;
@class NSString;

@interface TestCNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability> {

	BOOL _available;
	id<CNUIIDSHandle> _handle;

}

@property (nonatomic,retain) id<CNUIIDSHandle> handle;              //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) BOOL available;                        //@synthesize available=_available - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isAvailable; 
-(id<CNUIIDSHandle>)handle;
-(void)setAvailable:(BOOL)arg1 ;
-(id)initWithHandle:(id)arg1 availability:(BOOL)arg2 ;
-(void)setHandle:(id<CNUIIDSHandle>)arg1 ;
-(BOOL)available;
-(BOOL)isAvailable;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

