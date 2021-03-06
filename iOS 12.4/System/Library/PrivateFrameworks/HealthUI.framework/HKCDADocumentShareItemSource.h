/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivityItemProvider.h>

@class HKCDADocumentSample, HKHealthStore, NSData, HKCDAPDFGenerator, NSURL;

@interface HKCDADocumentShareItemSource : UIActivityItemProvider {

	HKCDADocumentSample* _documentSample;
	HKHealthStore* _healthStore;
	NSData* _shareData;
	HKCDAPDFGenerator* _generator;
	NSURL* _exportArchiveURL;

}

@property (nonatomic,readonly) HKCDADocumentSample * documentSample;              //@synthesize documentSample=_documentSample - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                       //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) NSData * shareData;                                //@synthesize shareData=_shareData - In the implementation block
@property (nonatomic,readonly) HKCDAPDFGenerator * generator;                     //@synthesize generator=_generator - In the implementation block
@property (nonatomic,readonly) NSURL * exportArchiveURL;                          //@synthesize exportArchiveURL=_exportArchiveURL - In the implementation block
-(HKCDAPDFGenerator *)generator;
-(id)initWithDocumentSample:(id)arg1 healthStore:(id)arg2 ;
-(id)_simpleError:(id)arg1 ;
-(void)_buildZipArchiveWithCDA:(id)arg1 generatedPDF:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_generatePDFforCDA:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadShareDataWithHealthStore:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HKCDADocumentSample *)documentSample;
-(NSData *)shareData;
-(NSURL *)exportArchiveURL;
-(HKHealthStore *)healthStore;
-(void)dealloc;
-(id)item;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
@end

