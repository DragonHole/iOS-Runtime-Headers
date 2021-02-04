/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AMSURLSession;


@protocol AMSURLHandling <NSObject>
@property (assign,nonatomic,__weak) AMSURLSession * session; 
@required
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4;
-(id)handleResponse:(id)arg1 task:(id)arg2;
-(id)decodeData:(id)arg1 task:(id)arg2 error:(id*)arg3;
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
-(void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id*)arg3;
-(AMSURLSession *)session;
-(void)setSession:(id)arg1;

@end
