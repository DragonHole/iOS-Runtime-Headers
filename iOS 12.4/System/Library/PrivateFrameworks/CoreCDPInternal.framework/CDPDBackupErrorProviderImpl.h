/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDBackupRecoveryErrorProvider.h>

@protocol CDPStateUIProviderInternal;
@class CDPContext, NSString;

@interface CDPDBackupErrorProviderImpl : NSObject <CDPDBackupRecoveryErrorProvider> {

	CDPContext* _context;
	id<CDPStateUIProviderInternal> _uiProvider;
	unsigned long long _prevailingSecret;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPrevailingSecret:(unsigned long long)arg1 ;
-(id)recordNotFoundErrorWithUnderlyingError:(id)arg1 ;
-(id)verficationFailedErrorwithUnderlyingError:(id)arg1 ;
-(BOOL)supportsErrorPresentation;
-(id)cooldownErrorWithUnderlyingError:(id)arg1 ;
-(void)handleSoftLimitError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)globalHardLimitError;
-(void)handleHardLimitError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)globalHardLimitErrorWithRecord:(id)arg1 ;
-(id)hardLimitErrorForRecord:(id)arg1 ;
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2 ;
@end

