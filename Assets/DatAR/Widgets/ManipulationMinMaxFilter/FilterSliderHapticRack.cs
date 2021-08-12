////======= Copyright (c) Valve Corporation, All rights reserved. ===============
////
//// Purpose: Triggers haptic pulses based on a linear mapping
////
////=============================================================================
//// Modified by DatAR Research group: Previously failed to work when hand was attached

//using UniRx;
//using UnityEngine;
//using UnityEngine.Events;
//using Valve.VR.InteractionSystem;

//namespace _main.Widgets.ManipulationMinMaxFilter
//{
//	//-------------------------------------------------------------------------
//	[RequireComponent( typeof( Interactable ) )]
//	public class FilterSliderHapticRack : MonoBehaviour
//	{
//		[Tooltip("Filter slider controller driving the haptic rack")]
//		public FilterSliderControllerComponent filterSliderController;

//		[Tooltip( "The number of haptic pulses evenly distributed along the mapping" )]
//		public int teethCount = 128;

//		[Tooltip( "Minimum duration of the haptic pulse" )]
//		public int minimumPulseDuration = 500;

//		[Tooltip( "Maximum duration of the haptic pulse" )]
//		public int maximumPulseDuration = 900;

//		[Tooltip( "This event is triggered every time a haptic pulse is made" )]
//		public UnityEvent onPulse;

//		private Hand hand;
//		private int previousToothIndex = -1;
		
//		[SerializeField] private HandlePosition handlePosition;


//		//-------------------------------------------------
//		void Awake()
//		{
//			filterSliderController.selectedRange.Subscribe(values =>
//			{
//				if (handlePosition == HandlePosition.Lower)
//				{
//					CheckForChange(values.x);
//				}
//				else
//				{
//					CheckForChange(values.y);
//				}
//			});
//		}

//		//-------------------------------------------------
//		private void OnAttachedToHand( Hand hand )
//		{
//			this.hand = hand;
//		}


//		//-------------------------------------------------
//		private void OnDetachedFromHand( Hand hand )
//		{
//			this.hand = null;
//		}

//		//-------------------------------------------------
//		void CheckForChange(float value)
//		{
//			int currentToothIndex = Mathf.RoundToInt( value * teethCount - 0.5f );
//			if ( currentToothIndex != previousToothIndex )
//			{
//				Pulse();
//				previousToothIndex = currentToothIndex;
//			}
//		}


//		//-------------------------------------------------
//		private void Pulse()
//		{
//			if ( hand && (hand.isActive) && ( hand.GetBestGrabbingType() != GrabTypes.None ) )
//			{
//				ushort duration = (ushort)Random.Range( minimumPulseDuration, maximumPulseDuration + 1 );
//				hand.TriggerHapticPulse( duration );

//				onPulse.Invoke();
//			}
//		}
//	}
//}
