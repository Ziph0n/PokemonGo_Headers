/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:58 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/USManagedVariableObserverDelegate.h>
#import <pokemongo/USBillboardDelegate.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface UpsightManager : NSObject <USManagedVariableObserverDelegate, USBillboardDelegate> {

	BOOL _shouldSynchronizeManagedVariables;
	NSDictionary* _remoteNotificationDictionary;
	NSMutableDictionary* _billboardDict;

}

@property (nonatomic,retain) NSDictionary * remoteNotificationDictionary;              //@synthesize remoteNotificationDictionary=_remoteNotificationDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * billboardDict;                      //@synthesize billboardDict=_billboardDict - In the implementation block
@property (assign,nonatomic) BOOL shouldSynchronizeManagedVariables;                   //@synthesize shouldSynchronizeManagedVariables=_shouldSynchronizeManagedVariables - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectFromJsonString:(id)arg1 ;
+(id)sharedManger;
+(void)applicationDidFinishLaunchingNotification:(id)arg1 ;
+(void)applicationDidBecomeActiveNotification:(id)arg1 ;
+(BOOL)isValidJsonObject:(id)arg1 ;
+(id)jsonStringFromObject:(id)arg1 ;
+(void)load;
-(void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1 ;
-(void)didFailToRegisterForRemoteNotificationsWithError:(id)arg1 ;
-(void)didReceiveRemoteNotification:(id)arg1 ;
-(void)onOpenURL:(id)arg1 ;
-(void)setShouldSynchronizeManagedVariables:(BOOL)arg1 ;
-(void)prepareBillboardForScope:(id)arg1 ;
-(void)destroyBillboardForScope:(id)arg1 ;
-(BOOL)isContentReadyForBillboardWithScope:(id)arg1 ;
-(void)setBillboardDict:(NSMutableDictionary *)arg1 ;
-(void)setRemoteNotificationDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)remoteNotificationDictionary;
-(NSMutableDictionary *)billboardDict;
-(BOOL)shouldSynchronizeManagedVariables;
-(BOOL)observerShouldSynchronizeManagedVariables:(id)arg1 ;
-(void)observer:(id)arg1 didSynchronizeManagedVariables:(id)arg2 ;
-(id)presentingViewControllerForBillboard:(id)arg1 ;
-(void)billboardWillAppear:(id)arg1 ;
-(void)billboardDidDismiss:(id)arg1 ;
-(void)billboard:(id)arg1 didReceiveReward:(id)arg2 ;
-(void)billboard:(id)arg1 didReceivePurchase:(id)arg2 ;
-(id)init;
@end

