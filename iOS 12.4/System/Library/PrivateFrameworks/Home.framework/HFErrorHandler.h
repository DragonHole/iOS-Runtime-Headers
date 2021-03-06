/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HFErrorHandler : NSObject
+(id)descriptionLocalizationKeyForError:(id)arg1 ;
+(id)_descriptionForHMErrorCode:(long long)arg1 ;
+(id)_descriptionForHFErrorCode:(long long)arg1 ;
+(id)sharedHandler;
-(void)handleError:(id)arg1 ;
-(BOOL)_isErrorIndicativeOfApplicationBug:(id)arg1 operationType:(id)arg2 options:(id)arg3 ;
-(BOOL)canIgnoreError:(id)arg1 ;
-(id)_localizedTitleForError:(id)arg1 operationType:(id)arg2 options:(id)arg3 ;
-(id)_localizedDescriptionForError:(id)arg1 operationType:(id)arg2 options:(id)arg3 ;
-(BOOL)_isErrorPermanent:(id)arg1 operationType:(id)arg2 options:(id)arg3 ;
-(id)_localizedStringOrNilIfNotFoundForKey:(id)arg1 ;
-(void)logError:(id)arg1 operationDescription:(id)arg2 ;
-(void)handleError:(id)arg1 operationType:(id)arg2 options:(id)arg3 retryBlock:(/*^block*/id)arg4 cancelBlock:(/*^block*/id)arg5 ;
-(void)handleError:(id)arg1 retryBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
@end

